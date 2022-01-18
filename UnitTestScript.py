import os

exitCode = 0

print("Testing .........")

if os.system(r"G:\test_CI-CD\a.exe") == 0:
    print("test PASSED\n")
else:
    exitCode = 1
    print("test FAILED\n")
    
exit(exitCode)