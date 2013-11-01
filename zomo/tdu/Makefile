PORTNAME=	tdu
PORTVERSION=	0.1
CATEGORIES=	zomo
MASTER_SITES=	http://webonastick.com/tdu/
DISTFILES=	tdu-2008-05-07.tar.gz

MAINTAINER=	jon@zomo.co.uk
COMMENT=	tdu is a text-terminal program that displays disk space utilization in an interactive full-screen folding outline

WRKSRC=		${WRKDIR}/${PORTNAME}
USE_GMAKE=	1
BUILD_DEPENDS=	pkgconf:${PORTSDIR}/devel/pkgconf
LIB_DEPENDS=		libglib-2.0.so:${PORTSDIR}/devel/glib20

MAN1=		tdu.1
PLIST_FILES=	bin/tdu

do-install:
		${INSTALL_PROGRAM} ${WRKSRC}/tdu   ${STAGEDIR}${PREFIX}/bin
		${INSTALL_MAN}     ${WRKSRC}/tdu.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
