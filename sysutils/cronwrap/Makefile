PORTNAME=	cronwrap
PORTVERSION=	0.1
CATEGORIES=	sysutils
MASTER_SITES=	http://download.github.com/

MAINTAINER=	jon@zomo.co.uk
COMMENT=	Wrapper script for cron jobs

# TODO: this is way fragile! find better way to manage tagged github tarballs
# Seems you have warm the composed url up first by visiting
#   curl -I https://github.com/zomo/cronwrap/tarball/cronwrap-0.1
#   curl -I http://nodeload.github.com/zomo/cronwrap/tarball/cronwrap-0.1
# which is a roundabout way of saying fetch(1) isn't following the redirections

GITHASH=	0-geb3a383
WRKHASH=	0a07402
DISTFILES=	zomo-cronwrap-${DISTNAME}-${GITHASH}${EXTRACT_SUFX}
WRKSRC=		${WRKDIR}/zomo-cronwrap-${WRKHASH}
NO_BUILD=	1

# lockrun isn't in the tree, so allow environment to direct us to it
LOCAL_PORTS_DIR?= /usr/ports
RUN_DEPENDS=	lockrun:${LOCAL_PORTS_DIR}/sysutils/lockrun

do-install:
	${MKDIR} /var/log/cronwrap
	${MKDIR} /var/run/cronwrap
	${INSTALL_SCRIPT} ${WRKSRC}/cronwrap ${PREFIX}/bin

.include <bsd.port.mk>

# https://github.com/zomo/cronwrap/tarball/cronwrap-0.1
