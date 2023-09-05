#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <qrencode.h>

int main() {
    char text[] = "https://dilli822.github.io";  // Your website URL

    QRcode *qrcode = QRcode_encodeString(text, 0, QR_ECLEVEL_H, QR_MODE_8, 1);

    if (qrcode) {
        for (int y = 0; y < qrcode->width; y++) {
            for (int x = 0; x < qrcode->width; x++) {
                unsigned char b = qrcode->data[y * qrcode->width + x] & 1;
                printf("%c%c", b ? '#' : ' ', b ? '#' : ' ');
            }
            printf("\n");
        }

        QRcode_free(qrcode);
    }

    return 0;
}
