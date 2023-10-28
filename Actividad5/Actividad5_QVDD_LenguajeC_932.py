import cv2
import numpy as np
import imutils

print(cv2.__version__)

image = cv2.imread('ppchuy.jpeg')

cv2.imshow('Image',image)
cv2.waitKey(0)
cv2.destroyAllWindows