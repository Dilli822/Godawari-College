import qrcode

# Generate a QR code with the Facebook page URL
facebook_page_url = "https://www.facebook.com/Yana-Music-Institute-103259411301004"  # Your Facebook page URL

qr = qrcode.QRCode(version=1, box_size=10, border=4)
qr.add_data(facebook_page_url)
qr.make(fit=True)

# Create an image from the QR code
qr_image = qr.make_image(fill_color="black", back_color="white")

# Save the image to a file
qr_image.save("facebook_qrcode.png")

# Display or open the QR code image
qr_image.show()
