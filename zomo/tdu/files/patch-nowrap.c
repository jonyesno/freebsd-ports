--- nowrap.c.orig	2023-04-26 00:57:44.025403000 +0000
+++ nowrap.c	2023-04-26 00:58:02.607998000 +0000
@@ -37,8 +37,8 @@
 	char *p;		/* through buffer */

 	va_start(ap, fmt);	/* looks like i need to do this to pass */
-	va_end(ap);		/* arg list to vsnprintf(). */
 	vsnprintf(buffer, BUFFER_SIZE, fmt, ap);
+	va_end(ap);		/* arg list to vsnprintf(). */

 	getmaxyx(win, maxy, maxx);
 	for (p = buffer; *p; ++p) {
