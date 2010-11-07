PORTNAME=	mcollective
PORTVERSION=	0.4.10
CATEGORIES=	sysutils

DISTNAME=	mcollective-${PORTVERSION}
HOMEPAGE=	http://code.google.com/p/mcollective/
MASTER_SITES=	http://mcollective.googlecode.com/files/
EXTRACT_SUFX=	.tgz

MAINTAINER=	jon@zomo.co.uk

NO_BUILD=	1
USE_RUBY=	1
STRIP=

CONFIG_PATH=	/etc/mcollective/server.cfg
LIBDIR_PATH=	/usr/libexec/mcollective

post-extract:
	${CP} ${FILESDIR}/mcollectived.rc ${WRKDIR}

do-patch:
	${SED} -i '' -e 's:${CONFIG_PATH}:${PREFIX}${CONFIG_PATH}:' ${WRKSRC}/mcollectived.rb
	${SED} -i '' -e 's:${LIBDIR_PATH}:${PREFIX}/share:' ${WRKSRC}/etc/server.cfg.dist
	${SED} -i '' -e 's:%%PREFIX%%:${PREFIX}:' ${WRKDIR}/mcollectived.rc

do-install:
	${MKDIR} ${EXAMPLESDIR}
	${MKDIR} ${DATADIR}
	${MKDIR} ${DOCSDIR}
	${MKDIR} ${PREFIX}/etc/mcollective
	${MKDIR} ${PREFIX}/etc/mcollective/ssl
	${INSTALL_PROGRAM} ${WRKSRC}/mcollectived.rb ${PREFIX}/sbin/mcollectived
	${INSTALL_DATA} ${WRKSRC}/etc/server.cfg.dist ${PREFIX}/etc/mcollective/server.cfg.dist
	${INSTALL_SCRIPT} ${WRKDIR}/mcollectived.rc ${PREFIX}/etc/rc.d/mcollectived
	( cd ${WRKSRC}/lib     && ${COPYTREE_SHARE} \* ${RUBY_SITELIBDIR}/ )
	( cd ${WRKSRC}/etc     && ${COPYTREE_SHARE} \* ${EXAMPLESDIR}/ )
	( cd ${WRKSRC}/doc     && ${COPYTREE_SHARE} \* ${DOCSDIR}/ )
	( cd ${WRKSRC}/plugins/mcollective && ${COPYTREE_SHARE} \* ${DATADIR}/ )

.include <bsd.port.mk>
