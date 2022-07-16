#This is the first model made depending on Act *no.* or *no.* Act logic

from enum import Flag
import xml.etree.ElementTree as ET
import os
directory = 'Civil Appeal output'
for filename in os.listdir(directory):
    file = os.path.join(directory, filename)
    with open(file) as f:
        many_lines = f.readlines()
   

    out_dir = directory+'1'
    out_file = os.path.join(out_dir, filename.replace(".txt", "1.txt"))
    out = open( out_file, 'w')
    for lines in many_lines:
            sentence = lines.split('.')
            prev=sentence[0]
            for tex in range(0,len(sentence)):
                x = sentence[tex].split()
                for i in range(len(x)):
                    if(x[i].replace(",","").lower() == "act"):
                        if (i!=0 and x[i-1].replace(",","").isnumeric()) or (i!=len(x)-1 and x[i+1].replace(",","").isnumeric()):
                            if(tex==0):
                                out.write(sentence[0]+"." + '\n\n')
                                continue
                            if(sentence[tex]!=prev):
                                out.write(sentence[0]+"."+sentence[tex] + '\n\n')
                                prev=sentence[tex]
            
                           