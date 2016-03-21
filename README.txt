作者：洪曼容 <klare0216@gmail.com>
系級：資訊106
最後更新：2016.03.22 02:53


      Program Enviroment:

        server: pd2.imslab.org
        OS: Debian GNU/Linux 8 
        compiler: G++


      Description:

        此程式可以將file.in內的身高體重資料換算成BMI值以及其肥胖程度的描述, 
        並輸出成file.out檔案。在這次作業裡有使用到之前沒學過得cout的格式化輸出,
        和以前C使用printf()的格式化輸出的方法非常不同。

        <main.cpp>
            讀入file.in, 藉由BMI的public function做處理
            得到BMI值以及對應的Category, 再格式化寫入file.out。
        
        <BMI.cpp>
            使用setHeight(),setMass()將需要的值存入, 再使用getBMI()得到其BMI的值。
            使用getCategory()則可得到相對應的敘述。
