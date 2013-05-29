distclean_dirs = \
	bootstrapingproject \
	gtk-doc \
	$(NULL)

phony_deps = \
	bootstrapingproject-doc \
	bootstrapingproject-gtk-doc \
	$(NULL)

bootstrapingprojectdocdir=$(datadir)/devhelp/references/bootstrapingproject
bootstrapingprojectimgdir=$(datadir)/devhelp/references/bootstrapingproject/img
bootstrapingprojectgtkdocdir=$(datadir)/gtk-doc/html/bootstrapingproject

common_doc_files = \
	*.css \
	*.png \
	*.js \
	index.htm \
	*.html \
	$(NULL)

bootstrapingprojectdoc_DATA = \
	bootstrapingproject/bootstrapingproject/bootstrapingproject.devhelp2 \
	$(addprefix bootstrapingproject/bootstrapingproject/,$(common_doc_files)) \
	$(NULL)

bootstrapingprojectgtkdoc_DATA = gtk-doc/bootstrapingproject/html/*

bootstrapingprojectimg_DATA = \
	bootstrapingproject/bootstrapingproject/img/*.png \
	$(NULL)

$(bootstrapingprojectdoc_DATA) $(bootstrapingprojectimg_DATA): bootstrapingproject-doc
$(bootstrapingprojectgtkdoc_DATA): bootstrapingproject-gtk-doc

valadoc_flags = \
	--force \
	--verbose \
	--package-name $(PACKAGE_NAME) \
	--package-version $(PACKAGE_VERSION) \
	$(NULL)

# bootstrapingproject documentation
bootstrapingproject_doc_files = \
	$(top_srcdir)/lib/DockController.vala \
	$(top_srcdir)/lib/Factories/AbstractMain.vala \
	$(top_srcdir)/lib/Factories/Factory.vala \
	$(top_srcdir)/lib/Services/Logger.vala \
	$(top_srcdir)/lib/Services/Paths.vala \
	$(top_srcdir)/lib/Widgets/CompositedWindow.vala \
	$(top_srcdir)/lib/Widgets/DockWindow.vala \
	$(NULL)

valadoc_flags_bootstrapingproject = \
	$(valadoc_flags) \
	$(BOOTSTRAPINGPROJECT_DOCS_VALAFLAGS) \
	--pkg bootstrapingproject-internal \
	--pkg compat \
	--vapidir=$(top_builddir)/lib \
	--vapidir=$(top_srcdir)/vapi \
	$(bootstrapingproject_doc_files) \
	$(NULL)

bootstrapingproject-doc: $(bootstrapingproject_doc_files)
	$(AM_V_GEN)$(VALADOC) \
		-o bootstrapingproject/ \
		--doclet=html \
		$(valadoc_flags_bootstrapingproject) \
		$(NULL)

bootstrapingproject-gtk-doc: $(bootstrapingproject_doc_files)
	$(AM_V_GEN)$(VALADOC) \
		-X -l -X $(top_builddir)/lib/.libs/libbootstrapingproject.so \
		-X $(top_builddir)/lib/bootstrapingproject.h \
		-o gtk-doc/bootstrapingproject \
		--doclet=gtkdoc \
		$(valadoc_flags_bootstrapingproject) \
		$(NULL)

.PHONY: $(phony_deps)

distclean-local: distclean-docs
distclean-docs:
	rm -rf $(distclean_dirs)

