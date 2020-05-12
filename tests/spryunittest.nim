import spryvm

# Some helpers for testing
template show*(cd: string): string =
  (proc(code: string): string = 
    var nd = newParser().parse(code)
    result = $nd)(cd)
template identical*(code: string): bool =
  code == $newParser().parse(code)
template isolate*(code: string): string {.dirty.} =
  $vm.evalRoot("[" & code & "]")
template run*(code: string): string {.dirty.} =
  $vm.evalRoot("[" & code & "]")
template stringRun*(code: string): string {.dirty.} =
  StringVal(vm.evalRoot("[" & code & "]")).value
