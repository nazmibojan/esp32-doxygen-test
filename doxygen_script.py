Import("env")

# Define a custom target for running Doxygen after compilation
doxygen_target = env.Alias("doxygen", [], ["doxygen Doxyfile"])

# Add the custom target to the build environment
env.AlwaysBuild(doxygen_target)

# Add a description for the custom target
env.Default(doxygen_target, "Generate Doxygen documentation")

# Configure the Doxygen command (adjust paths and options as needed)
env.AddCustomTarget(
    doxygen_target,
    "cd $PROJECT_DIR && doxygen",
    title="Running Doxygen...",
    description="Generating documentation with Doxygen",
)
