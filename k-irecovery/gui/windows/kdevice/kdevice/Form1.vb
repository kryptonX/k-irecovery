Public Class Form1

    Private Sub idBtn_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles idBtn.Click
        Running1.Visible = True
        Running1.Enabled = True
        Running1.Select()
    End Sub

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Running1.Visible = False
        Running1.Enabled = False
    End Sub

    Private Sub Running1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Running1.Load

    End Sub
End Class
