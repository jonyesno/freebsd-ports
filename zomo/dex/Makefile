PORTNAME=		dex
CATEGORIES=		zomo

MAINTAINER=		jon@zikomo.xyz
COMMENT=		A federated OpenID Connect provider
LICENSE=		APACHE20

USES=			go:modules
USE_GITHUB=		yes
GH_ACCOUNT=		dexidp
GH_PROJECT=		dex

DISTVERSIONPREFIX=	v
DISTVERSION=		2.36.0

GO_TARGET=		./cmd/dex

SUB_LIST=	DEX_USER=${DEX_USER} \
		DEX_GROUP=${DEX_GROUP} \
		DEX_DATADIR=${DEX_DATADIR}

DEX_USER?=	dex
DEX_GROUP?=	dex

USERS=		${DEX_USER}
GROUPS=		${DEX_GROUP}

PLIST_SUB=	${SUB_LIST}

DEX_DATADIR?=	/var/db/${PORTNAME}

GH_TUPLE=	\
		AppsFlyer:go-sundheit:v0.5.0:appsflyer_go_sundheit/vendor/github.com/AppsFlyer/go-sundheit \
		Azure:go-ntlmssp:cb9428e4ac1e:azure_go_ntlmssp/vendor/github.com/Azure/go-ntlmssp \
		Masterminds:goutils:v1.1.1:masterminds_goutils/vendor/github.com/Masterminds/goutils \
		Masterminds:semver:v1.5.0:masterminds_semver/vendor/github.com/Masterminds/semver \
		Masterminds:semver:v3.2.0:masterminds_semver_v3/vendor/github.com/Masterminds/semver/v3 \
		Masterminds:sprig:v3.2.3:masterminds_sprig_v3/vendor/github.com/Masterminds/sprig/v3 \
		agext:levenshtein:v1.2.1:agext_levenshtein/vendor/github.com/agext/levenshtein \
		apparentlymart:go-textseg:v13.0.0:apparentlymart_go_textseg_v13/vendor/github.com/apparentlymart/go-textseg/v13 \
		ariga:atlas:03a4779a6338:ariga_atlas/vendor/ariga.io/atlas \
		beevik:etree:v1.1.0:beevik_etree/vendor/github.com/beevik/etree \
		beorn7:perks:v1.0.1:beorn7_perks/vendor/github.com/beorn7/perks \
		census-instrumentation:opencensus-go:v0.24.0:census_instrumentation_opencensus_go/vendor/go.opencensus.io \
		cespare:xxhash:v2.2.0:cespare_xxhash_v2/vendor/github.com/cespare/xxhash/v2 \
		coreos:go-oidc:v3.5.0:coreos_go_oidc_v3/vendor/github.com/coreos/go-oidc/v3 \
		coreos:go-semver:v0.3.0:coreos_go_semver/vendor/github.com/coreos/go-semver \
		coreos:go-systemd:v22.3.2:coreos_go_systemd_v22/vendor/github.com/coreos/go-systemd/v22 \
		davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		dexidp:dex:2bb4896:dexidp_dex_v2 \
		ent:ent:v0.11.10:ent_ent/vendor/entgo.io/ent \
		etcd-io:etcd:v3.5.7:etcd_io_etcd_api \
		etcd-io:etcd:v3.5.7:etcd_io_etcd_client \
		etcd-io:etcd:v3.5.7:etcd_io_etcd_client_pkg \
		felixge:httpsnoop:v1.0.3:felixge_httpsnoop/vendor/github.com/felixge/httpsnoop \
		ghodss:yaml:v1.0.0:ghodss_yaml/vendor/github.com/ghodss/yaml \
		go-asn1-ber:asn1-ber:v1.5.4:go_asn1_ber_asn1_ber/vendor/github.com/go-asn1-ber/asn1-ber \
		go-jose:go-jose:v3.0.0:go_jose_go_jose_v3/vendor/github.com/go-jose/go-jose/v3 \
		go-ldap:ldap:v3.4.4:go_ldap_ldap_v3/vendor/github.com/go-ldap/ldap \
		go-openapi:inflect:v0.19.0:go_openapi_inflect/vendor/github.com/go-openapi/inflect \
		go-sql-driver:mysql:v1.7.0:go_sql_driver_mysql/vendor/github.com/go-sql-driver/mysql \
		go-yaml:yaml:v2.4.0:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		go-yaml:yaml:v3.0.1:go_yaml_yaml_1/vendor/gopkg.in/yaml.v3 \
		gogo:protobuf:v1.3.2:gogo_protobuf/vendor/github.com/gogo/protobuf \
		golang:appengine:v1.6.7:golang_appengine/vendor/google.golang.org/appengine \
		golang:crypto:v0.7.0:golang_crypto/vendor/golang.org/x/crypto \
		golang:exp:b9f4876ce741:golang_exp/vendor/golang.org/x/exp \
		golang:groupcache:41bb18bfe9da:golang_groupcache/vendor/github.com/golang/groupcache \
		golang:mod:v0.8.0:golang_mod/vendor/golang.org/x/mod \
		golang:net:v0.8.0:golang_net/vendor/golang.org/x/net \
		golang:oauth2:v0.6.0:golang_oauth2/vendor/golang.org/x/oauth2 \
		golang:protobuf:v1.5.2:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:sys:v0.6.0:golang_sys/vendor/golang.org/x/sys \
		golang:text:v0.8.0:golang_text/vendor/golang.org/x/text \
		google:go-cmp:v0.5.9:google_go_cmp/vendor/github.com/google/go-cmp \
		google:go-genproto:7f2fa6fef1f4:google_go_genproto/vendor/google.golang.org/genproto \
		google:uuid:v1.3.0:google_uuid/vendor/github.com/google/uuid \
		googleapis:enterprise-certificate-proxy:v0.2.3:googleapis_enterprise_certificate_proxy/vendor/github.com/googleapis/enterprise-certificate-proxy \
		googleapis:gax-go:v2.7.1:googleapis_gax_go_v2/vendor/github.com/googleapis/gax-go \
		googleapis:google-api-go-client:v0.114.0:googleapis_google_api_go_client/vendor/google.golang.org/api \
		googleapis:google-cloud-go:compute/v1.18.0:googleapis_google_cloud_go_compute/vendor/cloud.google.com/go \
		gorilla:handlers:v1.5.1:gorilla_handlers/vendor/github.com/gorilla/handlers \
		gorilla:mux:v1.8.0:gorilla_mux/vendor/github.com/gorilla/mux \
		grpc-ecosystem:go-grpc-prometheus:v1.2.0:grpc_ecosystem_go_grpc_prometheus/vendor/github.com/grpc-ecosystem/go-grpc-prometheus \
		grpc:grpc-go:v1.53.0:grpc_grpc_go/vendor/google.golang.org/grpc \
		hashicorp:hcl:v2.13.0:hashicorp_hcl_v2/vendor/github.com/hashicorp/hcl/v2 \
		huandu:xstrings:v1.3.3:huandu_xstrings/vendor/github.com/huandu/xstrings \
		imdario:mergo:v0.3.11:imdario_mergo/vendor/github.com/imdario/mergo \
		inconshreveable:mousetrap:v1.0.1:inconshreveable_mousetrap/vendor/github.com/inconshreveable/mousetrap \
		jonboulle:clockwork:v0.2.2:jonboulle_clockwork/vendor/github.com/jonboulle/clockwork \
		kylelemons:godebug:v1.1.0:kylelemons_godebug/vendor/github.com/kylelemons/godebug \
		lib:pq:v1.10.7:lib_pq/vendor/github.com/lib/pq \
		mattermost:xml-roundtrip-validator:v0.1.0:mattermost_xml_roundtrip_validator/vendor/github.com/mattermost/xml-roundtrip-validator \
		mattn:go-sqlite3:v1.14.16:mattn_go_sqlite3/vendor/github.com/mattn/go-sqlite3 \
		matttproud:golang_protobuf_extensions:v1.0.1:matttproud_golang_protobuf_extensions/vendor/github.com/matttproud/golang_protobuf_extensions \
		mitchellh:copystructure:v1.0.0:mitchellh_copystructure/vendor/github.com/mitchellh/copystructure \
		mitchellh:go-wordwrap:ad45545899c7:mitchellh_go_wordwrap/vendor/github.com/mitchellh/go-wordwrap \
		mitchellh:reflectwalk:v1.0.0:mitchellh_reflectwalk/vendor/github.com/mitchellh/reflectwalk \
		oklog:run:v1.1.0:oklog_run/vendor/github.com/oklog/run \
		pkg:errors:v0.9.1:pkg_errors/vendor/github.com/pkg/errors \
		pmezard:go-difflib:v1.0.0:pmezard_go_difflib/vendor/github.com/pmezard/go-difflib \
		prometheus:client_golang:v1.14.0:prometheus_client_golang/vendor/github.com/prometheus/client_golang \
		prometheus:client_model:v0.3.0:prometheus_client_model/vendor/github.com/prometheus/client_model \
		prometheus:common:v0.37.0:prometheus_common/vendor/github.com/prometheus/common \
		prometheus:procfs:v0.8.0:prometheus_procfs/vendor/github.com/prometheus/procfs \
		protocolbuffers:protobuf-go:v1.30.0:protocolbuffers_protobuf_go/vendor/google.golang.org/protobuf \
		russellhaering:goxmldsig:v1.3.0:russellhaering_goxmldsig/vendor/github.com/russellhaering/goxmldsig \
		shopspring:decimal:v1.2.0:shopspring_decimal/vendor/github.com/shopspring/decimal \
		sirupsen:logrus:v1.9.0:sirupsen_logrus/vendor/github.com/sirupsen/logrus \
		spf13:cast:v1.4.1:spf13_cast/vendor/github.com/spf13/cast \
		spf13:cobra:v1.6.1:spf13_cobra/vendor/github.com/spf13/cobra \
		spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
		square:go-jose:v2.6.0:square_go_jose/vendor/gopkg.in/square/go-jose.v2 \
		stretchr:testify:v1.8.2:stretchr_testify/vendor/github.com/stretchr/testify \
		uber-go:atomic:v1.7.0:uber_go_atomic/vendor/go.uber.org/atomic \
		uber-go:multierr:v1.6.0:uber_go_multierr/vendor/go.uber.org/multierr \
		uber-go:zap:v1.17.0:uber_go_zap/vendor/go.uber.org/zap \
		zclconf:go-cty:v1.8.0:zclconf_go_cty/vendor/github.com/zclconf/go-cty

post-extract:
	@${MKDIR} ${WRKSRC}/vendor/go.etcd.io/etcd/api
	@${RLN} ${WRKSRC_etcd_io_etcd_api}/api ${WRKSRC}/vendor/go.etcd.io/etcd/api/v3
	@${MKDIR} ${WRKSRC}/vendor/go.etcd.io/etcd/client
	@${RLN} ${WRKSRC_etcd_io_etcd_client}/client/v3 ${WRKSRC}/vendor/go.etcd.io/etcd/client/v3
	@${MKDIR} ${WRKSRC}/vendor/go.etcd.io/etcd/client/pkg
	@${RLN} ${WRKSRC_etcd_io_etcd_client_pkg}/client/pkg ${WRKSRC}/vendor/go.etcd.io/etcd/client/pkg/v3
	@${MKDIR} ${WRKSRC}/vendor/github.com/dexidp/dex/api
	@${RLN} ${WRKSRC_dexidp_dex_v2}/api/v2 ${WRKSRC}/vendor/github.com/dexidp/dex/api/v2

post-install:
	@${MKDIR} ${STAGEDIR}${DEX_DATADIR}
	@${CP} ${WRKSRC}/config.yaml.dist ${STAGEDIR}${PREFIX}/etc/dex.yaml.sample

.include <bsd.port.mk>

# vi:ts=8
