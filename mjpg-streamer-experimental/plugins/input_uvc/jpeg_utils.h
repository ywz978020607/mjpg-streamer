int compress_image_to_jpeg(struct vdIn *vd, unsigned char *buffer, int size, int quality);

void *memcpy_rgb2y(char *dest, const char *src, size_t count);
unsigned long jpeg_imageFile_dec_rgb2y_enc(char *inbuff, size_t inbuff_len);
