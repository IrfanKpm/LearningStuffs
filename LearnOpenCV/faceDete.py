import cv2 as cv
import matplotlib.pyplot as plt

# video = sequence of image
# Frame Per Secont (FPS) : number of image per secont 

face_cascade = cv.CascadeClassifier("haarcascade_frontalface_default.xml")

cap = cv.VideoCapture(0)

while True:
    status,frame = cap.read()
    frame = cv.flip(frame, 1)
    if status:
        grey = cv.cvtColor(frame,cv.COLOR_BGR2GRAY)
        faces = face_cascade.detectMultiScale(grey,1.3,4)
        # print(faces) [x,y,w,h] of face
        for x,y,w,h in faces:
         cv.rectangle(frame,(x,y),(x+w,y+h),(0,255,0),3)

        cv.imshow("Video",frame)
        if cv.waitKey(1) == ord("q"):
          break
    else:
        break
