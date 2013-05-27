include $(top_srcdir)/Makefile.common

bootstrapingproject_VALAFLAGS = \
	$(BOOTSTRAPINGPROJECT_CORE_VALAFLAGS) \
	$(top_builddir)/lib/bootstrapingproject.vapi \
	--vapidir $(top_srcdir)/vapi \
	$(top_srcdir)/vapi/config.vapi \
	-C \
	$(NULL)

bootstrapingprojectdir = $(bindir)

BUILT_SOURCES = bootstrapingproject_vala.stamp

bootstrapingproject_PROGRAMS = bootstrapingproject

bootstrapingproject_CFLAGS = \
	$(BOOTSTRAPINGPROJECT_CORE_CFLAGS) \
	-include config.h \
	-I$(top_builddir)/lib \
	$(NULL)

bootstrapingproject_LDADD = \
	$(BOOTSTRAPINGPROJECT_CORE_LIBS) \
	$(top_builddir)/lib/libbootstrapingproject.la \
	$(NULL)

bootstrapingproject_VALASOURCES = \
	AppMain.vala \
	$(NULL)

nodist_bootstrapingproject_SOURCES = \
	bootstrapingproject_vala.stamp \
	$(bootstrapingproject_VALASOURCES:.vala=.c) \
	$(NULL)

bootstrapingproject_vala.stamp: $(bootstrapingproject_VALASOURCES) Makefile
	$(AM_V_VALA)$(VALAC) \
		$(bootstrapingproject_VALAFLAGS) \
		$(filter %.vala %.c,$^)
	$(AM_V_at)touch $@

CLEANFILES = \
	$(nodist_bootstrapingproject_SOURCES) \
	$(NULL)

EXTRA_DIST = \
	$(bootstrapingproject_VALASOURCES) \
	$(NULL)

