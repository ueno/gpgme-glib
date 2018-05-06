gpgme_glib_sources = files(
  'gpgme-glib.c',
)

gpgme_glib_headers = files(
  'gpgme-glib.h',
)

gpgme_glib_enums = gnome.mkenums('gpgme-glib-enumtypes',
  sources: 'gpgme-glib-enums.h',
  h_template: 'gpgme-glib-enumtypes.h.template',
  c_template: 'gpgme-glib-enumtypes.c.template',
  identifier_prefix: 'GGpg',
  symbol_prefix: 'g_gpg',
)
