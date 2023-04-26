PORTNAME=	tdu
DISTVERSION=	g20220312
CATEGORIES=	zomo
MASTER_SITES=	GH
LICENSE=	GPLv2

USE_GITHUB=	yes
GH_ACCOUNT=	dse
GH_TAGNAME=	1a015f2
MAINTAINER=	jon@zikomo.xyz

COMMENT=	tdu is a text-terminal program that displays disk space utilization in an interactive full-screen folding outline

USES+=		gmake
USES+=		gettext-runtime
BUILD_DEPENDS=	pkgconf:devel/pkgconf
LIB_DEPENDS=	libglib-2.0.so:devel/glib20

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tdu   ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN}     ${WRKSRC}/tdu.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>

# vi:ts=8
