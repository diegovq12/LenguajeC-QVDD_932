import cv2
import numpy as np
import imutils

image = cv2.imread('C:\\Users\\diego\\Documents\\diegouni\\LenguajeC-QVDD_932\\Actividad5\\ppchuy.jpg')
image = imutils.resize(image, width=500)

imageGray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# Muestra la imagen origina
cv2.imshow('Imagen Original', image)
# Muestra la imagen en blanco y negro
cv2.imshow('Imagen en Blanco y Negro', imageGray)
cv2.waitKey(0)
cv2.destroyAllWindows()
