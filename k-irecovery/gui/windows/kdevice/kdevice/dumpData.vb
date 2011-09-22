Module dumpData
    Dim deviceMode As String
    Public model As String
    
    Sub getDevice()
        deviceMode = Shell("k-irecovery -kk")
        If deviceMode = "recovery" Then

        Else
            MessageBox.Show("A device in DFU Mode has been found." & vbNewLine & "Please connect a device in recovery mode instead.", "Warning", MessageBoxButtons.OK, MessageBoxIcon.Warning)
        End If
    End Sub

    Sub dumpModel()
        model = Shell("k-irecovery -i")
        dumpDevice()
    End Sub

    Sub dumpDevice()
        SaveTextToFile("", model + ".log")
        Shell("cmd /c k-irecovery -k" & " > " + model + ".log")
        finish()
    End Sub

    Sub finish()
        MessageBox.Show("I have finished saving you device's info!" & vbNewLine & "Keep them in a very safe spot!" & vbNewLine & "This is free software, if you paid demand a full refund." & vbNewLine & "Opensource at: code.google.com/p/k-irecovery", "Here ya go :)", MessageBoxButtons.OK, MessageBoxIcon.Information)
    End Sub
End Module
