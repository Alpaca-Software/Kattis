{
  description = "A Nix-Flake development environment.";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };

  outputs = {
    self,
    nixpkgs,
    ...
  }: let
    system = "x86_64-linux";
    pkgs = import nixpkgs {
      inherit system;
    };
  in {
    devShells."${system}".default = pkgs.mkShell {
      packages = with pkgs; [
		gcc
		kotlin
		nil
        go_1_21
        jdk17
      ];

      shellHook = ''
        export GO111MODULE=off

        echo
        echo --- Go:
        go version

        echo
        echo --- Java:
        java -version

        echo
        echo --- Kotlin:
        kotlin version

		echo
		echo --- GCC:
		gcc --version
      '';
    };
  };
}
