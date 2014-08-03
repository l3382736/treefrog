#include <QtCore>
#include <TreeFrogView>
#include "blog.h" 
#include "applicationhelper.h"

class T_VIEW_EXPORT blog_entryView : public TActionView
{
  Q_OBJECT
public:
  blog_entryView() : TActionView() { }
  blog_entryView(const blog_entryView &) : TActionView() { }
  QString toString();
};

QString blog_entryView::toString()
{
  responsebody.reserve(1165);
  responsebody += tr("<!DOCTYPE html>\n");
    tfetch(QVariantMap, blog);
  responsebody += tr("<html>\n<head>\n  <meta http-equiv=\"content-type\" content=\"text/html;charset=UTF-8\" />\n  <title>");
  responsebody += THttpUtility::htmlEscape(controller()->name() + ": " + controller()->activeAction());
  responsebody += tr("</title>\n</head>\n<body>\n<p style=\"color: red\">");
  tehex(error);
  responsebody += tr("</p>\n<p style=\"color: green\">");
  tehex(notice);
  responsebody += tr("</p>\n\n<h1>New Blog</h1>\n\n");
  responsebody += QVariant(formTag(urla("create"), Tf::Post)).toString();
  responsebody += tr("\n  <p>\n    <label>Title<br /><input name=\"blog[title]\" value=\"");
  responsebody += THttpUtility::htmlEscape(blog["title"]);
  responsebody += tr("\" /></label>\n  </p>\n  <p>\n    <label>Body<br /><input name=\"blog[body]\" value=\"");
  responsebody += THttpUtility::htmlEscape(blog["body"]);
  responsebody += tr("\" /></label>\n  </p>\n  <p>\n    <input type=\"submit\" value=\"Create\" />\n  </p>\n</form>\n\n");
  responsebody += QVariant(linkTo("Back", urla("index"))).toString();
  responsebody += tr("\n\n</body>\n</html>\n");

  return responsebody;
}

Q_DECLARE_METATYPE(blog_entryView)
T_REGISTER_VIEW(blog_entryView)

#include "blog_entryView.moc"
