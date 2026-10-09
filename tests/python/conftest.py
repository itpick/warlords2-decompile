"""Shared helpers for the Python tool tests (run: tools/run_tests.sh)."""
import importlib.util
import pathlib
import sys

ROOT = pathlib.Path(__file__).resolve().parents[2]
FIXTURES = pathlib.Path(__file__).resolve().parent / "fixtures"


def load_tool(name):
    """Import tools/<name>.py as a module (the tools are scripts, not a package)."""
    path = ROOT / "tools" / f"{name}.py"
    spec = importlib.util.spec_from_file_location(name, path)
    mod = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(mod)
    return mod


sys.path.insert(0, str(ROOT / "tools"))
