#  Basic Opencv Syntax

import cv2 as cv
import matplotlib.pyplot as plt

# video = sequence of image
# Frame Per Secont (FPS) : number of image per secont
cap = cv.VideoCapture(0)
while True:
    status,frame = cap.read()
    frame = cv.flip(frame, 1)
    if status:
        gray = cv.cvtColor(frame,cv.COLOR_BGR2GRAY)
        hsv = cv.cvtColor(frame,cv.COLOR_BGR2HSV)
        cv.putText(frame,"OpenCv",(100,100),cv.FONT_HERSHEY_COMPLEX,2,(0,255,0),5)
        cv.imshow("video",frame)
        #cv.imshow("gray",gray)
        #cv.imshow("hsv",hsv)
        if cv.waitKey(1) == ord("q"):
            break
    else:
        break
cv.destroyAllWindows()
