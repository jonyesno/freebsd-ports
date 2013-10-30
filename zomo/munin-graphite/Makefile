PORTNAME=	munin-graphite
PORTVERSION=	0.1
CATEGORIES=	zomo
MASTER_SITES=	GH
DISTNAME=	${GH_ACCOUNT}-${GH_PROJECT}-${PORTVERSION}-0-g${GH_COMMIT}

USE_GITHUB=	yes
GH_ACCOUNT=	adamhjk
GH_PROJECT=	munin-graphite
GH_COMMIT=	6502d06
GH_TAGNAME=	${GH_COMMIT}
MAINTAINER=	jon@zomo.co.uk

MAINTAINER=	jon@zomo.co.uk
COMMENT=	A munin-node to graphite bridge

NO_BUILD=	1

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/munin-graphite.rb ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
