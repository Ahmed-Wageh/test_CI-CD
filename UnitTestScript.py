import os

exitCode = 0

print("Testing .........")

if os.system(r"G:\test_CI-CD\a.exe") == 0:
    print("PASSED\n")
else:
    exitCode = 1
    print("FAILED\n")
    
exit(exitCode)