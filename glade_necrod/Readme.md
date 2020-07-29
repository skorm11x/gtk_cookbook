# Glade Necrod

A very silly gui for lauching a daemon that creates "infinite" zombie processes, thus clogging up the systemds PID table.

# Goals
Understand, or discover, if unix has any inbuilt protection from this? Would sudo powers be needed to launch this program? -> testing across various linux distros, BSD, etc.

Understand, or discover, how dos system process management works. Does dos have any inbuilt protections from silly zombie processes? 

# Note

There really isn't any reason for this to be a gui atm. I packaged it into one just later on see what dll's would need to be extracted/ included to make it a standalone dos executable given its process calls.