PORTNAME=	cronwrap
PORTVERSION=	0.5
CATEGORIES=	zomo
MASTER_SITES=	GH

USE_GITHUB=	yes
GH_ACCOUNT=	zomo
GH_TAGNAME=	${PORTNAME}-${PORTVERSION}
MAINTAINER=	jon@zomo.co.uk

COMMENT=	Wrapper script for cron jobs

NO_BUILD=	1

RUN_DEPENDS=	lockrun:${PORTSDIR}/zomo/lockrun

do-install:
	${MKDIR} ${STAGEDIR}/var/log/cronwrap
	${MKDIR} ${STAGEDIR}/var/run/cronwrap
	${INSTALL_SCRIPT} ${WRKSRC}/cronwrap ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/check_cronwrap ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>

# vi:ts=8
