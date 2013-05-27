include $(top_srcdir)/Makefile.common

AM_CFLAGS = \
	-DWNCK_I_KNOW_THIS_IS_UNSTABLE \
	$(BOOTSTRAPINGPROJECT_CORE_CFLAGS) \
	-w \
	$(NULL)

AM_LDFLAGS = \
	$(LIBM) \
	$(NULL)

AM_VALAFLAGS = \
	$(BOOTSTRAPINGPROJECT_CORE_VALAFLAGS) \
	--vapidir $(top_srcdir)/vapi \
	$(top_srcdir)/vapi/compat.vapi \
	--basedir $(srcdir) \
	--directory $(builddir) \
	-C \
	$(NULL)

BUILT_SOURCES = \
	libbootstrapingproject_internal_la_vala.stamp \
	libbootstrapingproject_la_vala.stamp \
	bootstrapingproject.h \
	bootstrapingproject-resources.c \
	$(NULL)

libbootstrapingprojectincludedir = $(includedir)/bootstrapingproject
nodist_libbootstrapingprojectinclude_HEADERS = bootstrapingproject.h

vapidir = $(datadir)/vala/vapi
nodist_vapi_DATA = \
	bootstrapingproject.vapi \
	bootstrapingproject.deps \
	$(NULL)

pkgconfigdir = $(libdir)/pkgconfig
nodist_pkgconfig_DATA = bootstrapingproject.pc


lib_LTLIBRARIES = libbootstrapingproject.la

libbootstrapingprojectdir = $(libdir)

libbootstrapingproject_la_LDFLAGS = \
	$(AM_LDLAGS) \
	-no-undefined \
	-version-info "$(LT_CURRENT)":"$(LT_REVISION)":"$(LT_AGE)" \
	-export-dynamic \
	-export-symbols-regex '^bootstrapingproject_.*' \
	$(NULL)

libbootstrapingproject_la_VALAFLAGS = \
	$(builddir)/bootstrapingproject-internal.vapi \
	$(NULL)

libbootstrapingproject_la_LIBADD = \
	$(BOOTSTRAPINGPROJECT_CORE_LIBS) \
	$(builddir)/libbootstrapingproject-internal.la \
	$(NULL)

libbootstrapingproject_la_VALASOURCES = \
	Factories/AbstractMain.vala \
	Factories/Factory.vala \
	DockController.vala \
	System/Paths.vala \
	System/Logger.vala \
	Widgets/DockWindow.vala \
	Widgets/CompositedWindow.vala \
	$(NULL)

nodist_libbootstrapingproject_la_SOURCES = \
	$(BUILT_SOURCES) \
	$(libbootstrapingproject_la_VALASOURCES:.vala=.c) \
	$(NULL)

bootstrapingproject-resources.c: bootstrapingproject.gresource.xml Makefile $(shell $(GLIB_COMPILE_RESOURCES) --generate-dependencies --sourcedir $(top_srcdir)/data $(srcdir)/bootstrapingproject.gresource.xml)
	$(AM_V_GEN) XMLLINT=$(XMLLINT) $(GLIB_COMPILE_RESOURCES) --target $@ --sourcedir $(top_srcdir)/data --generate --c-name bootstrapingproject $<

bootstrapingproject.h bootstrapingproject.vapi: libbootstrapingproject_la_vala.stamp

libbootstrapingproject_la_vala.stamp build-abi: libbootstrapingproject_internal_la_vala.stamp $(libbootstrapingproject_la_VALASOURCES) Makefile
	$(AM_V_VALA)$(VALAC) \
		$(AM_VALAFLAGS) $(libbootstrapingproject_la_VALAFLAGS) \
		-H bootstrapingproject.h \
		--library bootstrapingproject \
		--symbols build-abi \
		--vapi bootstrapingproject.vapi \
		$(filter %.vala %.c,$^)
	$(AM_V_at)touch $@

symbols: build-abi
	@cat $(builddir)/build-abi | sort > $(srcdir)/libbootstrapingproject.symbols


noinst_LTLIBRARIES = libbootstrapingproject-internal.la

libbootstrapingproject_internal_la_CFLAGS = \
	$(AM_CFLAGS) \
	-fvisibility=internal \
	$(NULL)

libbootstrapingproject_internal_la_LDFLAGS = \
	-avoid-version \
	-non_shared \
	-static \
	$(NULL)

libbootstrapingproject_internal_la_LIBADD = \
	$(BOOTSTRAPINGPROJECT_CORE_LIBS) \
	$(NULL)

libbootstrapingproject_internal_la_VALASOURCES = \
	$(NULL)

nodist_libbootstrapingproject_internal_la_SOURCES = \
	$(libbootstrapingproject_internal_la_VALASOURCES:.vala=.c) \
	$(NULL)

bootstrapingproject-internal.h bootstrapingproject-internal.vapi: libbootstrapingproject_internal_la_vala.stamp

libbootstrapingproject_internal_la_vala.stamp: $(libbootstrapingproject_internal_la_VALASOURCES) Makefile
	$(AM_V_VALA)$(VALAC) \
		$(AM_VALAFLAGS) \
		-H bootstrapingproject-internal.h \
		--library bootstrapingproject-internal \
		--vapi bootstrapingproject-internal.vapi \
		$(filter %.vala %.c,$^)
	$(AM_V_at)touch $@


TESTS = abicheck.sh

CLEANFILES = \
	$(nodist_libbootstrapingproject_la_SOURCES) \
	$(nodist_libbootstrapingproject_internal_la_SOURCES) \
	build-abi \
	bootstrapingproject.deps \
	bootstrapingproject.pc \
	bootstrapingproject.vapi \
	bootstrapingproject.h \
	bootstrapingproject-internal.vapi \
	bootstrapingproject-internal.h \
	$(NULL)

EXTRA_DIST = \
	$(libbootstrapingproject_la_VALASOURCES) \
	$(libbootstrapingproject_internal_la_VALASOURCES) \
	abicheck.sh \
	libbootstrapingproject.symbols \
	bootstrapingproject.deps.in \
	bootstrapingproject.gresource.xml \
	bootstrapingproject.pc.in \
	$(NULL)

