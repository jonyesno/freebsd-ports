PORTNAME=	retry
DISTVERSION=	1.0.5
CATEGORIES=	zomo
MASTER_SITES=	GH

MAINTAINER=	jon@zikomo.xyz
COMMENT=	Retry a command until the command succeeds

LICENSE=	APACHE20

BUILD_DEPENDS=	txt2man:textproc/txt2man

USES+=		autoreconf
USE_GITHUB=	yes
GH_ACCOUNT=	minfrin
GH_TAGNAME=	4a74786

HAS_CONFIGURE=	1

PLIST_FILES=	bin/retry \
		share/man/man1/retry.1.gz

.include <bsd.port.mk>
