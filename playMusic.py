import playsound
def putarMusik(nomor):
    playsound.playsound('Sound/P.S NOMOR.mp3', True)
    playsound.playsound('Sound/'+str(nomor)+'.mp3', True)
    playsound.playsound('Sound/15 menit lagi akan habis.mp3', True)
