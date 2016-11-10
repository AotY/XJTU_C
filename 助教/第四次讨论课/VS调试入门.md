# VS调试入门

## 导言
在软件开发周期中，测试和修正缺陷(defect，defect与bug的区别：Bug是缺陷的一种表现形式，而一个defect是可以引起多种Bug)。
**调试的时间远多于写代码的时间**。通常，debug是指发现缺陷并改正的过程。修正缺陷紧随debug之后，或者说二者是相关的。如果代码中存在缺陷，我们首先要识别造成缺陷的根本原因（root cause），这个过程就称作调试(debugging)。找到根本原因后，就可以修正缺陷。
Visual Studio提供了很多用于调试的工具.

## 启动调试
可以通过VS的调试（Debug）菜单启动调试。点击调试菜单下的“启动调试”或者按F5键启动。如果你已经在代码中加入了断点，那么执行会自动开始。

## 使用断点(Breakpoints)进行调试
**断点用于通知调试器何时何处暂停程序的执行。**通过点击左边栏或者按F9键在当前行添加断点。在加断点之前，你需要知道你的代码将会出现什么错误，在什么地方停止执行。当调试器执行到断点处时，你可以使用其他的调试工具核对代码何处出现错误。
**命中断点（hit the breakpoint）后，加断点的行变为黄色，意指下一步将执行此行。**

#### 逐过程（Step Over）
调试器执行到断点后，你可能需要一条一条的执行代码。”Step Over“[F10]命令用于一条一条的执行代码。这将执行当前高亮的行，然后暂停。如果在一条方法调用语句高亮时按F10，执行会停在调用语句的下一条语句上。Step Over会一次整个方法。

#### 逐语句（Step Into）
它与Step Over相似。唯一的不同是，如果当前高亮语句是方法调用，调试器会进入方法内部。快捷键是”F11“

#### 跳出（Step Out）
当你在一个方法内部调试时会用到它。如果你在当前方法内按Shift - F11，调试器会完成此方法的执行，之后在调用此方法的语句的下一条语句处暂停。

#### 继续（Continue）
它像是重新执行你的程序。它会继续程序的执行直到遇到下一个断点。快捷键是”F5“。

#### 设置下一语句（Set Next Statement）
这是一个非常有趣的特性。设置下一语句允许你在调试的时候改变程序的执行路径。如果你的程序在某一行处暂停而且你想改变执行路径，跳到指定行，在这一行上右击，在右击菜单中选择”设置下一语句“。这样程序就会转到哪一行执行而不执行先前的代码。这在如下情况中非常有用：当你发现代码中某些行可能会导致程序的中断（break）而你不想让程序在那个时候中断。快捷键是Ctrl + Shift + F10。

## 数据便签（Data Tip）
数据便签是应用程序调试期间用于查看对象和变量的一种高级便签消息。当调试器执行到断点时，将鼠标移到对象或者变量上方时，你会看到它们的当前值。你甚至可以看到一些复杂对象（如dataset，datatable等等）的细节。数据便签左上角有一个“+”号用于展开它的子对象或者值。

## 监视窗口（Watch Windows）

列出当前方法中的所有变量。当调试器停在某特定断点并打开Autos窗口时，将展示当前范围中与此值相关的变量

## 快捷键

| **F5**        | **If not currently debugging, this runs the startup project or projects and attaches the debugger.** |
| ------------- | ---------------------------------------- |
| Ctrl-F5       | Runs the code without invoking the debugger |
| F11           | Step Into                                |
| Shift-F11     | Executes the remaining lines out from procedure |
| F10           | Executes the next line of code but does not step into any function calls |
| Shift-F5      | Available in break and run modes, this terminates the debugging session |
| Ctrl-Alt-H    | Displays the Threads window to view all of the threads for the current process |
| F9            | Sets or removes a breakpoint at the current line |
| Ctrl-Shift-F5 | Terminates the current debugging session, rebuilds if necessary, and starts a new debugging session. |

## 总结（Summary）
- Step Into（逐语句）：执行并移动到下一条语句（实际上，跳入上一条语句的代码块，此代码块的第一条）

- Step Over（逐过程）：执行并跳到下一条语句，但不进入上一条语句的代码块

- Step Out（跳出）：执行到代码块结尾

