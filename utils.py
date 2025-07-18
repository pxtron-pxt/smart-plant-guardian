import numpy as np

def preprocess_roi(roi):
    roi = cv2.resize(roi, (48, 48))
    roi = roi.astype("float") / 255.0
    roi = np.expand_dims(roi, axis=0)
    roi = np.expand_dims(roi, axis=-1)
    return roi

def decode_emotion(prediction):
    labels = ["Angry", "Disgust", "Fear", "Happy", "Sad", "Surprise", "Neutral"]
    return labels[prediction.argmax()]
