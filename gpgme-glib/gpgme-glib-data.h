#ifndef GPGME_GLIB_DATA_H_
#define GPGME_GLIB_DATA_H_

#include <gio/gio.h>

#define G_GPG_TYPE_DATA (g_gpg_data_get_type ())
G_DECLARE_FINAL_TYPE (GGpgData, g_gpg_data, G_GPG, DATA, GObject)

GGpgData *g_gpg_data_new (void);
GGpgData *g_gpg_data_new_from_bytes (GBytes *bytes);
GGpgData *g_gpg_data_new_from_fd (gint fd, GError **error);
gssize g_gpg_data_read (GGpgData *data, gpointer buffer, gsize size);
gssize g_gpg_data_write (GGpgData *data, gconstpointer buffer, gsize size);
goffset g_gpg_data_seek (GGpgData *data, goffset offset, GSeekType whence);
GBytes *g_gpg_data_free_to_bytes (GGpgData *data);

#endif	/* GPGME_GLIB_DATA_H_ */
