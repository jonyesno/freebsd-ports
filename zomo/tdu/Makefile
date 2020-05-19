PORTNAME=	tdu
PORTVERSION=	0.1
CATEGORIES=	zomo
MASTER_SITES=	http://webonastick.com/tdu/
DISTFILES=	tdu-2008-05-07.tar.gz

MAINTAINER=	jon@zomo.co.uk
COMMENT=	tdu is a text-terminal program that displays disk space utilization in an interactive full-screen folding outline

WRKSRC=		${WRKDIR}/${PORTNAME}
USES=		gmake
USE_GNOME+=	glib20
USES+=		gettext-runtime
BUILD_DEPENDS=	pkgconf:devel/pkgconf

do-install:
		${INSTALL_PROGRAM} ${WRKSRC}/tdu   ${STAGEDIR}${PREFIX}/bin
		${INSTALL_MAN}     ${WRKSRC}/tdu.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
