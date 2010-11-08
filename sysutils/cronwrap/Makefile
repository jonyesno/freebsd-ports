PORTNAME=	cronwrap
PORTVERSION=	0.1
CATEGORIES=	sysutils
MASTER_SITES=	http://download.github.com/

MAINTAINER=	jon@zomo.co.uk
COMMENT=	Wrapper script for cron jobs

# TODO: this is way fragile! find better way to manage tagged github tarballs
GITHASH=	0-geb3a383
WRKHASH=	0a07402
DISTFILES=	zomo-cronwrap-${DISTNAME}-${GITHASH}${EXTRACT_SUFX}
WRKSRC=		${WRKDIR}/zomo-cronwrap-${WRKHASH}


do-install:
	${MKDIR} /var/log/cronwrap
	${MKDIR} /var/run/cronwrap
	${INSTALL_SCRIPT} ${WRKSRC}/cronwrap ${PREFIX}/bin

.include <bsd.port.mk>

# https://github.com/zomo/cronwrap/tarball/cronwrap-0.1
