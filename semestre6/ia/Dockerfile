FROM tensorflow/tensorflow
WORKDIR /app
COPY . .
RUN apt update
RUN apt install python3 python3-pip build-essential libgl1-mesa-glx libglib2.0-0 ffmpeg libxext6 libsm6 -y 
RUN pip3 install opencv-python 
RUN pip3 install imutils
RUN pip3 install -U scikit-learn
RUN pip3 install -U Pillow
