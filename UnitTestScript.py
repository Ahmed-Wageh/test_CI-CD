import os

if os.system(r"G:\test_CI-CI\a.exe") == 0:
    print("PASSED\n")
else:
    print("FAILED\n")