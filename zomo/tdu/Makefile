PORTNAME=	tdu
DISTVERSION=	g20220312
CATEGORIES=	zomo
MASTER_SITES=	GH

USE_GITHUB=	yes
GH_ACCOUNT=	dse
GH_TAGNAME=	1a015f2
MAINTAINER=	jon@zikomo.xyz

COMMENT=	tdu is a text-terminal program that displays disk space utilization in an interactive full-screen folding outline

USES+=		gmake
BUILD_DEPENDS=	pkgconf:${PORTSDIR}/devel/pkgconf
LIB_DEPENDS=	libglib-2.0.so:${PORTSDIR}/devel/glib20
WITH_DEBUG=	1

MAN1=		tdu.1
PLIST_FILES=	bin/tdu

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tdu   ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN}     ${WRKSRC}/tdu.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>

# vi:ts=8
