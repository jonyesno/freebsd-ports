PORTNAME=	lockrun
PORTVERSION=	0.1
CATEGORIES=	sysutils
MASTER_SITES=	http://www.unixwiz.net/tools/
DISTFILES=	lockrun.c
EXTRACT_ONLY=

MAINTAINER=	jon@zomo.co.uk
COMMENT=	Run cron job with overrun protection 

do-extract:
	mkdir -p ${WRKSRC}
	cp ${DISTDIR}/lockrun.c ${WRKSRC}

do-build:
	cd ${WRKSRC} && gcc -o lockrun lockrun.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/lockrun /usr/local/bin/lockrun

.include <bsd.port.mk>
