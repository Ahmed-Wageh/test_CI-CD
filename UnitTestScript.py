import os

exitCode = 0

print("Testing .........")
exitCode = os.system(r"G:\test_CI-CD\a.exe")
if exitCode == 0:
    print("test PASSED\n")
else:
    print(exitCode)
    print("test FAILED\n")
    
exit(exitCode)