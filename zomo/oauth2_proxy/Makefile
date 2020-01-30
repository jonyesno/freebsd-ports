PORTNAME=		oauth2_proxy
DISTVERSIONPREFIX=	v
DISTVERSION=		4.1.0
CATEGORIES=		zomo net

MAINTAINER=		jon@zikomo.xyz
COMMENT=		A reverse proxy and static file server that provides authentication using Providers to validate accounts by email, domain or group.
LICENSE=		MIT

USES=			go:modules
USE_GITHUB=		1
GH_ACCOUNT=		pusher

GH_TUPLE=	\
		BurntSushi:toml:v0.3.1:burntsushi_toml/vendor/github.com/BurntSushi/toml \
		alicebob:gopher-json:5a6b3ba71ee6:alicebob_gopher_json/vendor/github.com/alicebob/gopher-json \
		alicebob:miniredis:v2.5.0:alicebob_miniredis/vendor/github.com/alicebob/miniredis \
		bitly:go-simplejson:v0.5.0:bitly_go_simplejson/vendor/github.com/bitly/go-simplejson \
		bmizerany:assert:b7ed37b82869:bmizerany_assert/vendor/github.com/bmizerany/assert \
		census-instrumentation:opencensus-go:v0.21.0:census_instrumentation_opencensus_go/vendor/go.opencensus.io \
		coreos:go-oidc:v2.1.0:coreos_go_oidc/vendor/github.com/coreos/go-oidc \
		davecgh:go-spew:v1.1.0:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		dgrijalva:jwt-go:v3.2.0:dgrijalva_jwt_go/vendor/github.com/dgrijalva/jwt-go \
		fsnotify:fsnotify:v1.4.7:fsnotify_fsnotify/vendor/gopkg.in/fsnotify/fsnotify.v1 \
		go-redis:redis:v6.15.5:go_redis_redis/vendor/github.com/go-redis/redis \
		go-tomb:tomb:dd632973f1e7:go_tomb_tomb/vendor/gopkg.in/tomb.v1 \
		go-yaml:yaml:v2.2.2:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		golang:appengine:v1.5.0:golang_appengine/vendor/google.golang.org/appengine \
		golang:crypto:34f69633bfdc:golang_crypto/vendor/golang.org/x/crypto \
		golang:net:f4e77d36d62c:golang_net/vendor/golang.org/x/net \
		golang:oauth2:0f29369cfe45:golang_oauth2/vendor/golang.org/x/oauth2 \
		golang:protobuf:v1.3.1:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:sys:ecd444e8653b:golang_sys/vendor/golang.org/x/sys \
		golang:text:v0.3.2:golang_text/vendor/golang.org/x/text \
		gomodule:redigo:v2.0.0:gomodule_redigo/vendor/github.com/gomodule/redigo \
		google:go-genproto:54afdca5d873:google_go_genproto/vendor/google.golang.org/genproto \
		googleapis:gax-go:v2.0.5:googleapis_gax_go/vendor/github.com/googleapis/gax-go \
		googleapis:google-api-go-client:v0.10.0:googleapis_google_api_go_client/vendor/google.golang.org/api \
		googleapis:google-cloud-go:v0.38.0:googleapis_google_cloud_go/vendor/cloud.google.com/go \
		grpc:grpc-go:v1.20.1:grpc_grpc_go/vendor/google.golang.org/grpc \
		hashicorp:golang-lru:v0.5.1:hashicorp_golang_lru/vendor/github.com/hashicorp/golang-lru \
		hpcloud:tail:v1.0.0:hpcloud_tail/vendor/github.com/hpcloud/tail \
		kr:pretty:v0.1.0:kr_pretty/vendor/github.com/kr/pretty \
		kr:text:v0.1.0:kr_text/vendor/github.com/kr/text \
		mbland:hmacauth:44256dfd4bfa:mbland_hmacauth/vendor/github.com/mbland/hmacauth \
		mreiferson:go-options:20ba7d382d05:mreiferson_go_options/vendor/github.com/mreiferson/go-options \
		natefinch:lumberjack:v2.0.0:natefinch_lumberjack/vendor/gopkg.in/natefinch/lumberjack.v2 \
		onsi:ginkgo:v1.10.2:onsi_ginkgo/vendor/github.com/onsi/ginkgo \
		onsi:gomega:v1.7.0:onsi_gomega/vendor/github.com/onsi/gomega \
		pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
		pquerna:cachecontrol:1555304b9b35:pquerna_cachecontrol/vendor/github.com/pquerna/cachecontrol \
		square:go-jose:v2.3.1:square_go_jose/vendor/gopkg.in/square/go-jose.v2 \
		stretchr:testify:v1.4.0:stretchr_testify/vendor/github.com/stretchr/testify \
		yhat:wsutil:1d66fa95c997:yhat_wsutil/vendor/github.com/yhat/wsutil \
		yuin:gopher-lua:1cd887cd7036:yuin_gopher_lua/vendor/github.com/yuin/gopher-lua

.include <bsd.port.mk>
