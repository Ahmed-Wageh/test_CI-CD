import os

exitCode = 0

print("Testing .........")

if os.system(r"a.exe") == 0:
    print("test PASSED\n")
else:
    exitCode = 1
    print("test FAILED\n")
    
exit(exitCode)