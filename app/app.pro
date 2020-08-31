TEMPLATE = subdirs

SUBDIRS= rtkplot_qt \
         rtknavi_qt \
         rtkget_qt \
         rtkpost_qt \
         rtklaunch_qt \
         srctblbrows_qt \
         strsvr_qt \
         rtkconv_qt

app.depends = src
