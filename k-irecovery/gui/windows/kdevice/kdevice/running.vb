Public Class running
    Dim deviceMode As String
    Private Sub running_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

    End Sub

    Private Sub run_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles run.Tick
        'getDeviceMode()
        If waitingLbl.Enabled = True Then
            waitingLbl.Enabled = False
            modelLbl.Enabled = True
            ProgressBar1.Value += 12.5
        ElseIf modelLbl.Enabled = True Then
            modelLbl.Enabled = False
            productLbl.Enabled = True
            ProgressBar1.Value += 12.5
        ElseIf productLbl.Enabled = True Then
            productLbl.Enabled = False
            indexLbl.Enabled = True
            ProgressBar1.Value += 12.5
        ElseIf indexLbl.Enabled = True Then
            indexLbl.Enabled = False
            bootromlbl.Enabled = True
            ProgressBar1.Value += 12.5
        ElseIf bootromlbl.Enabled = True Then
            bootromlbl.Enabled = False
            pathLbl.Enabled = True
            ProgressBar1.Value += 12.5
        ElseIf pathLbl.Enabled = True Then
            pathLbl.Enabled = False
            valueLbl.Enabled = True
            ProgressBar1.Value += 12.5
        ElseIf valueLbl.Enabled = True Then
            valueLbl.Enabled = False
            doneLbl.Enabled = True
            ProgressBar1.Value = 100
            run.Enabled = False
            Me.Visible = False
            dumpModel()
        End If
    End Sub

    Sub getDeviceMode()
        deviceMode = Shell("k-irecovery -kk")
        If deviceMode = "recovery" Then

        ElseIf deviceMode = "dfu" Then
            MessageBox.Show("A device in DFU Mode has been found." & vbNewLine & "Please connect a device in recovery mode instead.", "Warning", MessageBoxButtons.OK, MessageBoxIcon.Warning)
            run.Enabled = False
            Me.Visible = False
        Else
            MessageBox.Show("No device has been found" & vbNewLine & "Please connect a device in recovery mode.", "Warning", MessageBoxButtons.OK, MessageBoxIcon.Warning)
            run.Enabled = False
            Me.Visible = False
        End If
    End Sub

    Private Sub running_Enter(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Enter
        run.Enabled = True
    End Sub

    Private Sub idBtn_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles idBtn.Click
        idBtn.Visible = False
        waitingLbl.Visible = True
        waitingLbl.Enabled = True
        modelLbl.Visible = True
        productLbl.Visible = True
        indexLbl.Visible = True
        bootromlbl.Visible = True
        pathLbl.Visible = True
        valueLbl.Visible = True
        doneLbl.Visible = True
        ProgressBar1.Visible = True
        run.Enabled = True

    End Sub
End Class
