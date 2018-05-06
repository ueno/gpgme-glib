project('gpgme-glib', 'c')

gnome = import('gnome')

cc = meson.get_compiler('c')

# Dependencies
min_glib_version = '2.44'
gpgme_glib_deps = [
  dependency('glib-2.0',    version: '>=' + min_glib_version),
  dependency('gobject-2.0', version: '>=' + min_glib_version),
  dependency('gio-2.0',     version: '>=' + min_glib_version),
  cc.find_library('gpgme'),
]

# config.h
conf = configuration_data()
config_h = configure_file(
  output: 'config.h',
  configuration: conf,
)

# Sources
subdir('gpgme-glib')

gpgme_glib = library('gpgme-glib',
  gpgme_glib_sources + gpgme_glib_enums,
  dependencies: gpgme_glib_deps,
  include_directories: include_directories('gpgme-glib')
)

if get_option('gir') or get_option('vapi')
  gpgme_glib_gir = gnome.generate_gir(gpgme_glib,
    sources: gpgme_glib_sources + gpgme_glib_headers + gpgme_glib_enums,
    link_with: gpgme_glib,
    dependencies: gpgme_glib_deps,
    namespace: 'Gpgme',
    nsversion: '1.0',
    includes: 'Gio-2.0',
    identifier_prefix: 'GGpg',
    symbol_prefix: 'g_gpg',
    extra_args: '--warn-all',
    install: true,
  )
endif

if get_option('gir') or get_option('vapi')
  gpgme_glib_vapi = gnome.generate_vapi('gpgme-glib',
    sources: gpgme_glib_gir[0],
    metadata_dirs: meson.source_root(),
    packages: 'gio-2.0',
    install: true,
  )
endif
