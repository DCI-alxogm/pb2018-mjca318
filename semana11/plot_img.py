import matplotlib.pyplot as plt
import matplotlib.image as mpimg
import numpy as np
import sys

##Programa para graficar
for i in range(1,len(sys.argv)):
    file=sys.argv[i]
    plt.clf()
    data_img=np.loadtxt(file)
    plt.imshow(data_img)
    plt.colorbar()
<<<<<<< HEAD
plt.savefig(file+'.png')
=======
    plt.savefig(file+'.png')
>>>>>>> b2c964b0ee4ef7b082f9d66da1a6ac475c4b6c5d
