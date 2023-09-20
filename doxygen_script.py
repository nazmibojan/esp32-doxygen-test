# Import("env")

# # Define a custom target for running Doxygen after compilation
# doxygen_target = env.Alias("doxygen", [], ["doxygen Doxyfile"])

# # Add a description for the custom target
# env.Default(doxygen_target, "Generate Doxygen documentation")

# # Configure the Doxygen command (adjust paths and options as needed)
# env.AddPostAction(
#     doxygen_target,
#     "cd $PROJECT_DIR && doxygen",
#     description="Generating documentation with Doxygen",
# )

# # Ensure the custom target is always built
# env.AlwaysBuild(doxygen_target)

import os
from time import sleep

os.system('doxygen Doxyfile')
sleep(1)
os.system('cp -r docs/html/* docs')
sleep(1)
os.system('rm -r docs/html')

