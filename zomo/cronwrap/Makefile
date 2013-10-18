PORTNAME=	cronwrap
PORTVERSION=	0.1
CATEGORIES=	zomo
MASTER_SITES=	GH
DISTNAME=	${GH_ACCOUNT}-${GH_PROJECT}-${PORTVERSION}-0-g${GH_COMMIT}

USE_GITHUB=	yes
GH_ACCOUNT=	zomo
GH_PROJECT=	cronwrap
GH_COMMIT=	eb3a383
GH_TAGNAME=	${GH_COMMIT}
MAINTAINER=	jon@zomo.co.uk

COMMENT=	Wrapper script for cron jobs

#WRKSRC=		${WRKDIR}/cronwrap-cronwrap-${PORTVERSION}
NO_BUILD=	1

RUN_DEPENDS=	lockrun:${PORTSDIR}/zomo/lockrun

do-install:
	${MKDIR} ${STAGEDIR}/var/log/cronwrap
	${MKDIR} ${STAGEDIR}/var/run/cronwrap
	${INSTALL_SCRIPT} ${WRKSRC}/cronwrap ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
