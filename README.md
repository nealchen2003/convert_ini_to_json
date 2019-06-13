# ini 格式数据配置文件转 json 格式工具

现在可以使用 json 格式配置子任务制，并可以添加测试点依赖，加快了配置和评测速度。

## c 分支下的 C 语言版本

这个工具会将 ini 格式转化为 json 格式，并将 0 分点的下一个测试点依赖到它。

如果要加入子任务包含、Hack 或移除不必要的依赖，可以手动修改。

## 主分支下的 Python3 版本

这个工具会将 ini 格式转化为 json 格式，子任务识别方式为：每个子任务有且仅有最后一个测试点满分非 0, 计分方式为取所有测试点的最低分。

Hack 仍需要手动添加。

## 20190613 加入编辑功能

目前支持：
- 给子任务添加测试点
- 从子任务移除测试点
- 设置子任务包含关系

测试点依赖是自动推断的。
