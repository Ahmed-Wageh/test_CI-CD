import os

exitCode = 0

print("Testing .........")
os.system(r"G:\test_CI-CD\a.exe")

if os.system(r"G:\test_CI-CD\a.exe") == 0:
    print("test PASSED\n")
else:
    exitCode = 1
    print("test FAILED\n")
    
exit(exitCode)