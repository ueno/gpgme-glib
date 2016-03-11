#ifndef GPGME_GLIB_CTX_H_
#define GPGME_GLIB_CTX_H_

G_BEGIN_DECLS

#define G_GPG_TYPE_CTX (g_gpg_ctx_get_type ())
G_DECLARE_FINAL_TYPE (GGpgCtx, g_gpg_ctx, G_GPG, CTX, GObject)

G_END_DECLS

#endif	/* GPGME_GLIB_CTX_H_ */
