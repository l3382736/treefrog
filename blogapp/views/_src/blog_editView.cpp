#include <QtCore>
#include <TreeFrogView>
#include "blog.h" 
#include "applicationhelper.h"

class T_VIEW_EXPORT blog_editView : public TActionView
{
  Q_OBJECT
public:
  blog_editView() : TActionView() { }
  blog_editView(const blog_editView &) : TActionView() { }
  QString toString();
};

QString blog_editView::toString()
{
  responsebody.reserve(1516);
  responsebody += tr("<!DOCTYPE html>\n");
    tfetch(QVariantMap, blog);
  responsebody += tr("<html>\n<head>\n  <meta http-equiv=\"content-type\" content=\"text/html;charset=UTF-8\" />\n  <title>");
  responsebody += THttpUtility::htmlEscape(controller()->name() + ": " + controller()->activeAction());
  responsebody += tr("</title>\n</head>\n<body>\n<p style=\"color: red\">");
  tehex(error);
  responsebody += tr("</p>\n<p style=\"color: green\">");
  tehex(notice);
  responsebody += tr("</p>\n\n<h1>Editing Blog</h1>\n\n");
  responsebody += QVariant(formTag(urla("save", blog["id"]), Tf::Post)).toString();
  responsebody += tr("\n  <p>\n    <label>ID<br /><input type=\"text\" name=\"blog[id]\" value=\"");
  responsebody += THttpUtility::htmlEscape(blog["id"]);
  responsebody += tr("\" readonly=\"readonly\" /></label>\n  </p>\n  <p>\n    <label>Title<br /><input type=\"text\" name=\"blog[title]\" value=\"");
  responsebody += THttpUtility::htmlEscape(blog["title"]);
  responsebody += tr("\" /></label>\n  </p>\n  <p>\n    <label>Body<br /><input type=\"text\" name=\"blog[body]\" value=\"");
  responsebody += THttpUtility::htmlEscape(blog["body"]);
  responsebody += tr("\" /></label>\n  </p>\n  <p>\n    <input type=\"submit\" value=\"Update\" />\n  </p>\n</form>\n\n");
  responsebody += QVariant(linkTo("Show", urla("show", blog["id"]))).toString();
  responsebody += tr(" |\n");
  responsebody += QVariant(linkTo("Back", urla("index"))).toString();
  responsebody += tr("\n</body>\n</html>\n");

  return responsebody;
}

Q_DECLARE_METATYPE(blog_editView)
T_REGISTER_VIEW(blog_editView)

#include "blog_editView.moc"
