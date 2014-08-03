#include <QtCore>
#include <TreeFrogView>
#include "blog.h" 
#include "applicationhelper.h"

class T_VIEW_EXPORT blog_showView : public TActionView
{
  Q_OBJECT
public:
  blog_showView() : TActionView() { }
  blog_showView(const blog_showView &) : TActionView() { }
  QString toString();
};

QString blog_showView::toString()
{
  responsebody.reserve(1468);
  responsebody += tr("<!DOCTYPE html>\n");
    tfetch(Blog, blog);
  responsebody += tr("<html>\n<head>\n  <meta http-equiv=\"content-type\" content=\"text/html;charset=UTF-8\" />\n  <title>");
  responsebody += THttpUtility::htmlEscape(controller()->name() + ": " + controller()->activeAction());
  responsebody += tr("</title>\n</head>\n<body>\n<p style=\"color: red\">");
  tehex(error);
  responsebody += tr("</p>\n<p style=\"color: green\">");
  tehex(notice);
  responsebody += tr("</p>\n\n<h1>Showing Blog</h1>\n<dt>ID</dt><dd>");
  responsebody += THttpUtility::htmlEscape(blog.id());
  responsebody += tr("</dd><br />\n<dt>Title</dt><dd>");
  responsebody += THttpUtility::htmlEscape(blog.title());
  responsebody += tr("</dd><br />\n<dt>Body</dt><dd>");
  responsebody += THttpUtility::htmlEscape(blog.body());
  responsebody += tr("</dd><br />\n<dt>Created at</dt><dd>");
  responsebody += THttpUtility::htmlEscape(blog.createdAt());
  responsebody += tr("</dd><br />\n<dt>Updated at</dt><dd>");
  responsebody += THttpUtility::htmlEscape(blog.updatedAt());
  responsebody += tr("</dd><br />\n<dt>Lock Revision</dt><dd>");
  responsebody += THttpUtility::htmlEscape(blog.lockRevision());
  responsebody += tr("</dd><br />\n\n");
  responsebody += QVariant(linkTo("Edit", urla("edit", blog.id()))).toString();
  responsebody += tr(" |\n");
  responsebody += QVariant(linkTo("Back", urla("index"))).toString();
  responsebody += tr("\n\n</body>\n</html>\n");

  return responsebody;
}

Q_DECLARE_METATYPE(blog_showView)
T_REGISTER_VIEW(blog_showView)

#include "blog_showView.moc"
